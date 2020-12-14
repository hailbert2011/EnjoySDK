//
//  EnjoyBase.h
//  EnjoyBase
//
//  Created by 杨会权 on 2020/5/29.
//  Copyright © 2020 enjoy. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ENJOY_BASE_SDK_VER_STRING           @"1.0.0"
#define BASE_URL_DEBUG                      @"http://beta.enjoy.link/enjoy-server/"
#define BASE_URL                            @"https://sdk.enjoy.link/enjoy-server/"

@interface EnjoyBase : NSObject{
    BOOL isDebug;
    NSDictionary *config;
}

@property (nonatomic, readwrite) BOOL isDebug;
@property(nonatomic, strong) NSDictionary *config;

+ (EnjoyBase *)instance;

//获取enjoy Appid
- (NSString *)getEnjoyAppid;

//获取enjoy Secret
- (NSString *)getEnjoySecret;

//对应市场
- (NSString *)getEnjoyMarket;

//登录类型
- (NSArray *)getEnjoLoginTypes;

//获取应用套装ID
- (NSString *)getBundleId;

//获取应用版本号
- (NSString*) getAppVersion;

//获取当前设备语言
- (NSString*)getPreferredLanguage;

//获取机型
- (NSString *)getDeviceType;

//自定义设备ID
- (NSString *) getDeviceUUID;
@end
