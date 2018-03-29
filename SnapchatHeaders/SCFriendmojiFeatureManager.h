//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, SCFriendmojiService;

@interface SCFriendmojiFeatureManager : NSObject
{
    SCFriendmojiService *_friendmojiService;
    NSString *_selectedFriendmojiSymbol;
    NSString *_selectedFriendmojiDescription;
    NSString *_selectedFriendmojiSource;
    NSArray *_friendmojis;
    NSArray *_replacementEmojis;
}

@property(readonly, nonatomic) NSArray *replacementEmojis; // @synthesize replacementEmojis=_replacementEmojis;
@property(readonly, nonatomic) NSArray *friendmojis; // @synthesize friendmojis=_friendmojis;
- (void).cxx_destruct;
- (id)emojiInfoWithSymbol:(id)arg1;
- (void)fetchLatestFriendmojis;
@property(readonly, nonatomic) NSString *selectedFriendmojiSource; // @synthesize selectedFriendmojiSource=_selectedFriendmojiSource;
@property(readonly, nonatomic) NSString *selectedFriendmojiDescription; // @synthesize selectedFriendmojiDescription=_selectedFriendmojiDescription;
- (void)selectFriendmojiToUpdate:(id)arg1;
- (void)resetToDefaultFriendmojiWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)updateFriendmojiToNewEmoji:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initWithFriendmojiService:(id)arg1;

@end

