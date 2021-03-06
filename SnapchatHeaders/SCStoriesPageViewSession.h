//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface SCStoriesPageViewSession : NSObject
{
    _Bool _didScroll;
    _Bool _didScrollWithScrollbar;
    _Bool _didScrollWithScrubber;
    _Bool _didTapFindFriends;
    unsigned long long _recentUpdatesCount;
    unsigned long long _recentUpdatesSeenCount;
    unsigned long long _followingOfficialStoriesCount;
    unsigned long long _followingOfficialStoriesSeenCount;
    NSMutableSet *_recentUpdatesSeenUsernames;
    NSMutableSet *_followingOfficialSeenUsernames;
}

@property(retain, nonatomic) NSMutableSet *followingOfficialSeenUsernames; // @synthesize followingOfficialSeenUsernames=_followingOfficialSeenUsernames;
@property(retain, nonatomic) NSMutableSet *recentUpdatesSeenUsernames; // @synthesize recentUpdatesSeenUsernames=_recentUpdatesSeenUsernames;
@property(nonatomic) unsigned long long followingOfficialStoriesSeenCount; // @synthesize followingOfficialStoriesSeenCount=_followingOfficialStoriesSeenCount;
@property(nonatomic) unsigned long long followingOfficialStoriesCount; // @synthesize followingOfficialStoriesCount=_followingOfficialStoriesCount;
@property(nonatomic) unsigned long long recentUpdatesSeenCount; // @synthesize recentUpdatesSeenCount=_recentUpdatesSeenCount;
@property(nonatomic) unsigned long long recentUpdatesCount; // @synthesize recentUpdatesCount=_recentUpdatesCount;
@property(nonatomic) _Bool didTapFindFriends; // @synthesize didTapFindFriends=_didTapFindFriends;
@property(nonatomic) _Bool didScrollWithScrubber; // @synthesize didScrollWithScrubber=_didScrollWithScrubber;
@property(nonatomic) _Bool didScrollWithScrollbar; // @synthesize didScrollWithScrollbar=_didScrollWithScrollbar;
@property(nonatomic) _Bool didScroll; // @synthesize didScroll=_didScroll;
- (void).cxx_destruct;
- (id)init;

@end

