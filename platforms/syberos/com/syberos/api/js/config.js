/* eslint-disable no-unused-vars */

/**
 * UI模块标志,
 * 默认为ui,可以增加其他
 */
var uiModules = {
  modal: true,
  navigator: true,
  webview: true,
  camera: true,
  system: true,
  filepicker: true,
  image: true
}
// 全局syberos对象,在初始化完成有建立
var SYBEROS = null
// 全局WEBVIEW
var WEBVIEWCORE = null

// 返回键的值
var KEYCODE_BACK = 16777313
