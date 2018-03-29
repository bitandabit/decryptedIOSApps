//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FriendStories, SCMTPointOfInterest, SCMapLoggerSession, SCMapRequest, SCUserSession;

@interface SCMapTapToPlayPOIMediaFetcher : NSObject
{
    double _mapZoomLevel;
    SCMapLoggerSession *_loggerSession;
    SCUserSession *_userSession;
    SCMapRequest *_manifestRequest;
    CDUnknownBlockType _mediaCompletion;
    _Bool _started;
    _Bool _cancelled;
    SCMTPointOfInterest *_poi;
    FriendStories *_friendStories;
}

@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) FriendStories *friendStories; // @synthesize friendStories=_friendStories;
@property(readonly, nonatomic) SCMTPointOfInterest *poi; // @synthesize poi=_poi;
- (void).cxx_destruct;
- (id)description;
- (id)_previewFriendStoriesForPoi:(id)arg1 state:(id)arg2 isOnboarding:(_Bool)arg3;
- (void)_safeMediaCompletionWithStory:(id)arg1 result:(unsigned long long)arg2;
- (void)cancelMediaDownloads;
- (void)cancelFetch;
- (void)_fetchManifestAndFetchFirstStory:(_Bool)arg1 state:(id)arg2 isTappedPOI:(_Bool)arg3;
- (void)_fetchStoryMedia:(id)arg1 isTappedPOI:(_Bool)arg2;
- (void)fetchManifestAndFirstStoryMediaWithMapStoriesState:(id)arg1 isTappedPOI:(_Bool)arg2 storyMediaRequestCompletion:(CDUnknownBlockType)arg3;
- (id)initWithPOI:(id)arg1 state:(id)arg2 mapZoomLevel:(double)arg3 isOnboarding:(_Bool)arg4 loggerSession:(id)arg5 userSession:(id)arg6;

@end

