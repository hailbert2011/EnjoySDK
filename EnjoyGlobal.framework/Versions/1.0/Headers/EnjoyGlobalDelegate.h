//
//  EnjoyGlobalDelegate.h
//  EnjoyGlobal
//
//  Created by 杨会权 on 2020/11/25.
//  Copyright © 2020 enjoy. All rights reserved.
//

#ifndef EnjoyGlobalDelegate_h
#define EnjoyGlobalDelegate_h


@protocol EnjoyLoginDelegate <NSObject>
- (void) onLoginSuccess:(NSDictionary *_Nullable)appUser;
- (void) onLoginFailed:(NSString *_Nullable)errorCode errorMsg:(NSString *_Nullable)errorMsg;
@end

@protocol EnjoySignUpDelegate <NSObject>
- (void) onSignUpSuccess;
- (void) onSignUpFail:(NSString *_Nullable)errorCode errorMsg:(NSString *_Nullable)errorMsg;
@end

@protocol EnjoyChangePasswordDelegate <NSObject>
- (void) onChangePasswordSuccess;
- (void) onChangePasswordFail:(NSString *_Nullable)errorCode errorMsg:(NSString *_Nullable)errorMsg;
@end

@protocol EnjoyGetSkuDetailDelegate <NSObject>
- (void) onGetSkuSuccess:(NSArray *_Nullable)products;
- (void) onGetSkuFailed:(NSString *_Nullable)errorMsg;
@end

@protocol EnjoyProductPayDelegate <NSObject>
- (void) onBuySuccess:(NSDictionary *_Nullable)purchase;
- (void) onBuyFailed:(NSString *_Nullable)errorCode errorMsg:(NSString *_Nullable)errorMsg;
- (void) onUserCancelled;
@end

#endif /* EnjoyGlobalDelegate_h */
