//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@class NSString;

@interface NSURL (Running)
+ (id)spt_runningPartnersNowPlayingURL;
+ (id)spt_runningPartnersFeatureURL;
+ (id)spt_runningSetupViewURLWithContentType:(id)arg1 blockName:(id)arg2;
+ (id)spt_runningContentViewURLWithContentType:(id)arg1 blockName:(id)arg2;
+ (id)spt_runningCategoriesViewURL;
+ (id)spt_runningFeatureURL;
@property(readonly, nonatomic, getter=spt_runningBlockName) NSString *runningBlockName;
@property(readonly, nonatomic, getter=spt_runningContentType) NSString *runningContentType;
@property(readonly, nonatomic, getter=spt_runningTempo) long long runningTempo;
- (_Bool)spt_isRunningPartnersNowPlayingURL;
- (_Bool)spt_isRunningPartnersFeatureURL;
- (_Bool)spt_isRunningViewSetupURL;
- (_Bool)spt_isRunningSetupManualURL;
- (_Bool)spt_isRunningContentTypeURL;
- (_Bool)spt_isRunningOriginalContentURL;
- (_Bool)spt_isRunningCategoryURL;
- (_Bool)spt_isRunningSpotifyURL;
- (_Bool)spt_isRunningURL;
- (_Bool)spt_isRunningCategoriesViewURL;
- (_Bool)spt_isRunningFeatureURL;
- (id)spt_backwardCompatibleContentTypeURL;
- (id)spt_runningSetupImageCacheURL;
- (id)spt_runningContentViewURLWithTempo:(unsigned long long)arg1;
- (id)spt_runningSetupViewURL;
- (id)spt_runningSetupManualURL;
- (id)spt_runningReducedSetupViewURL;
@end

