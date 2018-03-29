//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SnapVideoMetadata : NSObject
{
}

+ (_Bool)synchronouslyLoadAttributes:(id)arg1 forVideo:(id)arg2 error:(id *)arg3;
+ (_Bool)synchronouslyLoadAttributes:(id)arg1 forAssetTrack:(id)arg2 timeout:(double)arg3 error:(id *)arg4;
+ (_Bool)isVideoValidForURL:(id)arg1;
+ (double)outputBitrateMultiplierWithVideoContentComplexity:(long long)arg1;
+ (void)logVideoEvent:(id)arg1 videoSettings:(id)arg2 isSave:(_Bool)arg3;
+ (struct CGSize)videoSizeForURL:(id)arg1 waitWhileLoadingTracksIfNeeded:(_Bool)arg2;
+ (struct CGSize)videoSizeForAsset:(id)arg1 waitWhileLoadingTracksIfNeeded:(_Bool)arg2;
+ (struct CGSize)videoSizeForURL:(id)arg1;
+ (struct CGSize)videoSizeForAsset:(id)arg1;
+ (double)videoDurationForURL:(id)arg1;
+ (double)videoDurationForAsset:(id)arg1;
+ (double)transcodingBitrateMultiplierWithSourceType:(long long)arg1;
+ (struct CGSize)adjustVideoTargetSizeWithTargetAspectRatio:(double)arg1;
+ (_Bool)deviceMeetsRequirementsForContentAdaptiveVideoEncoding;
+ (_Bool)deviceMeetsMinimumRequirementsForHighQualityVideo;
+ (struct CGSize)_lagunaVideoTargetSizeWithVideoSourceSize:(struct CGSize)arg1 hasOverlayToBlend:(_Bool)arg2 isExport:(_Bool)arg3;
+ (struct CGSize)videoTargetSizeWithVideoSourceSize:(struct CGSize)arg1 videoTargetAspectRatio:(double)arg2 highQuality:(_Bool)arg3 isLagunaVideo:(_Bool)arg4 hasOverlayToBlend:(_Bool)arg5 isExport:(_Bool)arg6;
+ (long long)averageTranscodingBitRate:(struct CGSize)arg1 isRecording:(_Bool)arg2 highQuality:(_Bool)arg3 duration:(double)arg4 iFrameOnly:(_Bool)arg5 originalVideoBitRate:(double)arg6 overlayImageFileSizeBits:(long long)arg7 videoPlaybackRate:(double)arg8 isLagunaVideo:(_Bool)arg9 hasOverlayToBlend:(_Bool)arg10 sourceType:(long long)arg11;

@end

