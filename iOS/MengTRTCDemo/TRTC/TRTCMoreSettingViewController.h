//
//  TRTCMoreSettingViewController.h
//  TXLiteAVDemo
//
//  Created by rushanting on 2019/3/6.
//  Copyright © 2019 Tencent. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TXLiteAVSDK_TRTC/TRTCCloud.h"
//#import "TRTCCloud.h"

NS_ASSUME_NONNULL_BEGIN

@protocol TRTCMoreSettingDelegate <NSObject>

@optional
- (void)onAudioVolumeEnableChanged:(BOOL)enable;
- (void)onCloudMixingEnable:(BOOL)enable;

@end

@interface TRTCMoreSettingViewController : UITableViewController

@property (nonatomic, weak) id<TRTCMoreSettingDelegate> delegate;

+ (BOOL)isFrontCamera;
+ (BOOL)isFitScaleMode;
+ (BOOL)isAudioCaptureEnable;
+ (BOOL)isSpeakphoneMode;
+ (BOOL)isGsensorEnable;
+ (BOOL)isAudioVolumeEnable;
+ (BOOL)isCloudMixingEnable;

- (instancetype)initWithTRTCEngine:(TRTCCloud*)engine roomId:(NSString*)roomId userId:(NSString*)userId;
@end

NS_ASSUME_NONNULL_END
