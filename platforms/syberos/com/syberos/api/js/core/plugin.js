/**
 * Syber Plugin Function
 */
// eslint-disable-next-line no-unused-vars
function SyberPlugin (opts) {
  // 是否自动创建,默认只加载插件,不做创建
  this.autoCreate = opts.autoCreate || false
  this.id = opts.id
  this.module = opts.module || 'ui'
  this.name = opts.name
  // 支持的方法
  this.methods = opts.methods || []
  this.source = opts.source
  this.isReady = false
  this.page = opts.page || false
  // Syber
  this.syber = null
  // 挂载的qml
  this.object = null

  this.defaultParam = opts.param || {}
  // 插件需要的参数
  this.param = this.defaultParam
  // 请求ID
  this.handlerId = null
  // qml component
  this.component = null
  this.incubator = null
  this.eventList = {}
}

/**
 * 拓展参数
 * @param
 */
SyberPlugin.prototype.setParam = function (handlerId, param) {
  this.handlerId = handlerId
  if (param) {
    this.param = Object.assign(this.param, param)
  } else {
    console.error('SyberPlugin extendParam error,param is undefined')
  }
}

/**
 * 拓展参数
 * @param
 */
SyberPlugin.prototype.clearParam = function (param) {
  this.handlerId = null
  this.param = null
  this.param = {}
}

/**
 * register an event
 * @public
 * @param string
 * @param function
 */

SyberPlugin.prototype.on = function (eventName, callback) {
  this.eventList[eventName] = callback
  return this
}

/**
 * trigger an event
 * @public
 * @param string
 * @param mixed
 */
SyberPlugin.prototype.trigger = function () {
  var eventName = arguments[0]
  var len = arguments.length
  var funcArgs = []

  for (var sum = 1; sum < len; sum += 1) {
    funcArgs.push(arguments[sum])
  }

  //console.log('event name',this.eventList[eventName])

  if (typeof this.eventList[eventName] === 'function') {
    // registered by `.on()` method
    this.eventList[eventName].apply(this, funcArgs)
  } else {
    // registered by `.onXxx()` method
    var method = 'on' + eventName.charAt(0).toUpperCase() + eventName.slice(1)
    if (typeof this[method] === 'function') {
      // eslint-disable-next-line no-useless-call
      this[method].apply(this, funcArgs)
    }
  }
  return this
}
