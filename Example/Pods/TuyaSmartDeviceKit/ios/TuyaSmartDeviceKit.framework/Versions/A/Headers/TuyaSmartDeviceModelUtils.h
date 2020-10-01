//
//  TuyaSmartDeviceModelUtils.h
//  TuyaSmartDeviceKit
//
//  Created by Hemin Won on 2020/3/11.
//

#ifndef TuyaSmartDeviceModelUtils_h
#define TuyaSmartDeviceModelUtils_h

<<<<<<< HEAD

typedef NS_ENUM(NSInteger, TYHomeRoleType) {
    TYHomeRoleType_Unknown = -999,  /**< 家庭角色 无效 invalid role */
    TYHomeRoleType_Custom  = -1,  /**< 自定义角色 home custom role */
    TYHomeRoleType_Member  = 0,   /**< 家庭普通成员 home ordinary member*/
    TYHomeRoleType_Admin,         /**< 家庭管理员 无增删除其他管理员权限 home admin, can't add or remove other admin */
    TYHomeRoleType_Owner,         /**< 家庭超级管理员 拥有者 home owner, have all authority */
};

typedef NS_ENUM(NSUInteger, TYHomeStatus) {
    TYHomeStatusPending = 1,      /**< 待加入 受邀者未决定是否加入对应家庭 Not deciding whether to join the home */
    TYHomeStatusAccept,           /**< 受邀者已同意加入对应家庭 The invitee has agreed to join the home */
    TYHomeStatusReject            /**< 受邀者已拒绝加入对应家庭 The invitee have refused to join the home */
};

=======
typedef enum : NSUInteger {
    TuyaSmartDeviceUpgradeStatusDefault = 0,    // default 默认不需要升级的
    TuyaSmartDeviceUpgradeStatusReady,          // ready  硬件准备就绪
    TuyaSmartDeviceUpgradeStatusUpgrading,      // upgrading  升级中
    TuyaSmartDeviceUpgradeStatusSuccess,        // success  升级完成
    TuyaSmartDeviceUpgradeStatusFailure,        // failure 升级异常
    TuyaSmartDeviceUpgradeStatusWaitingExectue, // for nb, waiting exectue nb设备任务已下发，但还未执行
    TuyaSmartDeviceUpgradeStatusDownloaded,     // for nb, downloaded nb设备固件已下载
    TuyaSmartDeviceUpgradeStatusTimeout         // timeout 升级超时
} TuyaSmartDeviceUpgradeStatus;
>>>>>>> 117b2acc5143ed0f766ddbdb29948ff08b7331e7

#endif /* TuyaSmartDeviceModelUtils_h */
