//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@interface SCStoryLogger : NSObject
{
    NSString *_currentViewNextStorySnapEventUniqueId;
    NSMutableSet *_viewedStoriesUsernames;
    double _timeOfViewingStories;
}

+ (id)sharedInstance;
@property(nonatomic) double timeOfViewingStories; // @synthesize timeOfViewingStories=_timeOfViewingStories;
@property(retain, nonatomic) NSMutableSet *viewedStoriesUsernames; // @synthesize viewedStoriesUsernames=_viewedStoriesUsernames;
- (void).cxx_destruct;
- (void)logStoryReadyToPlay:(id)arg1;
- (void)logEndEventForNextStorySnapWithLoadingScreen:(_Bool)arg1 currentStoriesViewingSession:(id)arg2;
- (_Bool)_isNextStoryFirstSnap:(id)arg1;
- (void)logWaitingForStoryToPlay:(id)arg1;
- (void)logEndViewingStory:(id)arg1;
- (void)logStartViewingFriendStories:(id)arg1;
- (void)logDownloadStoryEnd:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3 additionalParams:(id)arg4;
- (void)logDownloadStoryEnd:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3;
- (void)logDownloadStoryStart:(id)arg1;
- (void)logPostStoryFailed:(id)arg1;
- (void)logPostStorySuccess:(id)arg1 postingType:(unsigned long long)arg2;
- (void)logPostStory:(id)arg1 postingType:(unsigned long long)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

