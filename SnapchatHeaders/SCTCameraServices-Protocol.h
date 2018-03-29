//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;
@protocol SCTVideoFrameReceiver;

@protocol SCTCameraServices <NSObject>
- (unsigned long long)getCameraType;
- (void)setCameraType:(unsigned long long)arg1;
- (void)setVideoFrameReceiver:(id <SCTVideoFrameReceiver>)arg1;
- (UIView *)getPreview;
- (void)setAutofocusAndExposurePointOfInterest:(struct CGPoint)arg1;
- (void)stopForConsumer:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)startForConsumer:(NSString *)arg1 completion:(void (^)(void))arg2;
@end

