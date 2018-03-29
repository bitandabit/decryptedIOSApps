//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDate, NSString;

@interface SCEmojiBrushResource : NSObject <NSCoding>
{
    NSArray *_emojiList;
    NSDate *_lastCheckingEmojiListTimestamp;
    NSString *_emojiListVersion;
    _Bool _hasSeenNewEmojiList;
    _Bool _isFetchingRemoteResource;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_updateLastCheckingEmojiListTimestamp;
- (_Bool)_updateEmojiBrushEmojiList:(id)arg1 withVersion:(id)arg2;
- (_Bool)_isEmojiListTTLExpired;
- (_Bool)hasSeenNewEmojiList;
- (void)displayedNewEmojiBrushListForVersion:(id)arg1;
- (void)checkEmojiBrushListAndUpdateIfNecessaryWithEmojiBrushService:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)getCurrentAvailableEmojiListVersion;
- (id)getCurrentAvailableEmojiList;
- (id)init;

@end

