import QtQuick 2.0
import QtWebKit 3.0
import QtQuick.Window 2.2
import QtWebKit.experimental 1.0
import com.syberos.basewidgets 2.0
import com.syberos.filemanager.filepicker 1.0
import "../js/util/log.js" as LOG
import "../js/syber.js" as Syberh

SWebview{
    id:spage
    surl:"file://" + helper.getWebRootPath() + "/index.html"
    Component.onCompleted: {
        LOG.logger.verbose("SPage:onCompleted ,url:[%s]",spage.surl)
        Syberh.init(spage,spage)
    }
}
