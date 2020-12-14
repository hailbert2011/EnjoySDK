//
//  EnjoyGlobal.h
//  EnjoyGlobal
//
//  Created by 杨会权 on 2020/11/24.
//  Copyright © 2020 enjoy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "EnjoyGlobalDelegate.h"

#define ENJOY_GLOBAL_SDK_VER_STRING       @"1.0.0"

typedef enum
{
    E_LAN_CN        = 0,    // 中文簡體
    E_LAN_HK,               // 中文繁體
    E_LAN_EN,               // 英文
}
E_LANGUAGE;

@interface EnjoyGlobal : NSObject{
    BOOL isDebug;
    BOOL isShowCloseButton;
    BOOL isDevelopServer;
}

@property (nonatomic, readwrite) BOOL isDebug;
@property (nonatomic, readwrite) BOOL isShowCloseButton;
@property (nonatomic, readwrite) BOOL isDevelopServer;

+ (EnjoyGlobal *_Nullable)instance;

- (BOOL)getDebug;
- (void)setDebug:(BOOL)isDebug;

/**
 设置语言
 */
- (void) setLanguage:(E_LANGUAGE) language;
/**
 获取登录方式
 */
- (NSArray *_Nonnull)getSupportedLogin;
/**
 游客登录
 */
- (void)loginWithAnonymous:(id <EnjoyLoginDelegate>_Nonnull)delegate;
/**
 账号密码登录
 */
- (void)loginWithEnjoy:(id <EnjoyLoginDelegate>_Nonnull)delegate username:(NSString *_Nonnull)username password:(NSString *_Nonnull)password;
/**
 注册账号
 */
- (void)enjoyUserSignUp:(id <EnjoySignUpDelegate>_Nonnull)delegate username:(NSString *_Nonnull)username password:(NSString *_Nonnull)password;
/**
 修改密码
 */
- (void)changePassword:(id <EnjoyChangePasswordDelegate>_Nonnull)delegate username:(NSString *_Nonnull)username password:(NSString *_Nonnull)password newPassword:(NSString *_Nonnull)newPassword;
/**
 获取商品信息
 */
- (void)getSkuDetail:(id <EnjoyGetSkuDetailDelegate>_Nonnull)delegate skuIds:(NSArray *_Nonnull)skuIds;
/**
 购买商品
 */
- (void)productPay:(id <EnjoyProductPayDelegate>_Nonnull)delegate payload:(NSString *_Nonnull)payload productIdentifier:(NSString *_Nonnull)productIdentifier usermark:(NSString *_Nonnull)usermark;
/**
 登录默认UI
 */
- (void)showLogin:(UIViewController *_Nonnull)viewController loginDelegate:(id <EnjoyLoginDelegate>_Nonnull)loginDelegate;
/**
 Facebook登录
 */
- (void)loginWithFacebook:(id <EnjoyLoginDelegate>_Nonnull)delegate;

/**
 GameCenter登录
 */
- (void)loginWithGameCenter:(id <EnjoyLoginDelegate>_Nonnull)delegate;
@end
