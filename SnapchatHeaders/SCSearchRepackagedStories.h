//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FriendStories, NSArray, NSString;

@interface SCSearchRepackagedStories : NSObject
{
    FriendStories *_friendStories;
    FriendStories *_unviewedFriendStories;
    long long _storyType;
    NSString *_storyTypeForDisplay;
}

+ (id)_storyTypeForDisplay:(long long)arg1;
@property(readonly, nonatomic) NSString *storyTypeForDisplay; // @synthesize storyTypeForDisplay=_storyTypeForDisplay;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) FriendStories *unviewedFriendStories; // @synthesize unviewedFriendStories=_unviewedFriendStories;
@property(readonly, nonatomic) FriendStories *friendStories; // @synthesize friendStories=_friendStories;
- (void).cxx_destruct;
- (id)mostRecentStoryTimestamp;
@property(readonly, nonatomic) NSArray *friendsInfo;
- (id)initWithFriendStories:(id)arg1 storyType:(long long)arg2;

@end
