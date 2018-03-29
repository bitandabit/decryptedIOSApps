//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, SOJUAdAppInstallImpressionTrack, SOJUAdDeepLinkImpressionTrack, SOJUAdLocalWebpageImpressionTrack, SOJUAdLongformVideoImpressionTrack, SOJUAdRemoteWebpageImpressionTrack, SOJUAdSubscribeImpressionTrack, SOJUAdThreeVImpressionTrack;

@interface SOJUAdStorySnapImpressionTrackBuilder : NSObject
{
    NSNumber *_snapIndex;
    NSNumber *_swipeUpCount;
    NSString *_skipEvent;
    NSString *_adType;
    SOJUAdThreeVImpressionTrack *_threeV;
    SOJUAdAppInstallImpressionTrack *_appInstall;
    SOJUAdLongformVideoImpressionTrack *_longformVideo;
    SOJUAdRemoteWebpageImpressionTrack *_remoteWebpage;
    SOJUAdLocalWebpageImpressionTrack *_localWebpage;
    SOJUAdDeepLinkImpressionTrack *_deepLink;
    SOJUAdSubscribeImpressionTrack *_subscribe;
}

+ (id)withJUAdStorySnapImpressionTrack:(id)arg1;
- (void).cxx_destruct;
- (id)setSubscribe:(id)arg1;
- (id)setDeepLink:(id)arg1;
- (id)setLocalWebpage:(id)arg1;
- (id)setRemoteWebpage:(id)arg1;
- (id)setLongformVideo:(id)arg1;
- (id)setAppInstall:(id)arg1;
- (id)setThreeV:(id)arg1;
- (id)setAdType:(id)arg1;
- (id)setSkipEvent:(id)arg1;
- (id)setSwipeUpCount:(id)arg1;
- (id)setSnapIndex:(id)arg1;
- (id)build;
- (id)setAdTypeEnum:(long long)arg1;
- (id)setSwipeUpCountValue:(int)arg1;
- (id)setSnapIndexValue:(int)arg1;

@end

