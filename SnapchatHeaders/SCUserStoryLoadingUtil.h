//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCUserStoryLoadingUtil : NSObject
{
}

+ (_Bool)_mayPreloadFriendStories:(id)arg1 numSnapsToLoad:(unsigned long long)arg2;
+ (void)inlineLoadFriendStories:(id)arg1 startIndex:(unsigned long long)arg2 viewingType:(long long)arg3 viewLocation:(long long)arg4;
+ (void)_precacheUnviewedStoriesWithKvoUsernames:(id)arg1 preloadUserToCount:(id)arg2 numStoriesAlwaysPrecached:(long long)arg3 numSnapsAlwaysPrecached:(unsigned long long)arg4;
+ (void)precacheUnviewedStories;
+ (void)tapToLoadFriendStories:(id)arg1 viewingType:(long long)arg2 fromPlayList:(_Bool)arg3 viewLocation:(long long)arg4;

@end

