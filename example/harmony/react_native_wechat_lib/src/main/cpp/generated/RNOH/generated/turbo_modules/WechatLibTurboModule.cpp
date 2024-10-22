/**
 * This code was generated by "react-native codegen-lib-harmony"
 */

#include "WechatLibTurboModule.h"

namespace rnoh {
using namespace facebook;

WechatLibTurboModule::WechatLibTurboModule(const ArkTSTurboModule::Context ctx, const std::string name) : ArkTSTurboModule(ctx, name) {
    methodMap_ = {
        ARK_ASYNC_METHOD_METADATA(registerApp, 2),
        ARK_ASYNC_METHOD_METADATA(isWXAppInstalled, 0),
        ARK_ASYNC_METHOD_METADATA(isWXAppSupportApi, 0),
        ARK_ASYNC_METHOD_METADATA(getApiVersion, 0),
        ARK_ASYNC_METHOD_METADATA(openWXApp, 0),
        ARK_ASYNC_METHOD_METADATA(sendAuthRequest, 2),
        ARK_ASYNC_METHOD_METADATA(authByScan, 3),
        ARK_ASYNC_METHOD_METADATA(shareText, 1),
        ARK_ASYNC_METHOD_METADATA(shareImage, 1),
        ARK_ASYNC_METHOD_METADATA(shareLocalImage, 1),
        ARK_ASYNC_METHOD_METADATA(shareFile, 1),
        ARK_ASYNC_METHOD_METADATA(shareMusic, 1),
        ARK_ASYNC_METHOD_METADATA(shareVideo, 1),
        ARK_ASYNC_METHOD_METADATA(shareWebpage, 1),
        ARK_ASYNC_METHOD_METADATA(shareMiniProgram, 1),
        ARK_ASYNC_METHOD_METADATA(launchMiniProgram, 1),
        ARK_ASYNC_METHOD_METADATA(chooseInvoice, 1),
        ARK_ASYNC_METHOD_METADATA(pay, 1),
        ARK_ASYNC_METHOD_METADATA(subscribeMessage, 1),
        ARK_ASYNC_METHOD_METADATA(openCustomerServiceChat, 2),
    };
}

} // namespace rnoh