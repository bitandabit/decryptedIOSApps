//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString, UIColor;

@interface SCGroupParticipantBuilder : NSObject
{
    NSString *_userId;
    unsigned long long _orderIndex;
    NSString *_username;
    NSString *_displayName;
    UIColor *_color;
    NSNumber *_talkSessionUserId;
    unsigned long long _mischiefVersion;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
}

+ (id)withGroupParticipant:(id)arg1;
- (void).cxx_destruct;
- (id)setBitmojiSelfieId:(id)arg1;
- (id)setBitmojiAvatarId:(id)arg1;
- (id)setMischiefVersion:(unsigned long long)arg1;
- (id)setTalkSessionUserId:(id)arg1;
- (id)setColor:(id)arg1;
- (id)setDisplayName:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setOrderIndex:(unsigned long long)arg1;
- (id)setUserId:(id)arg1;
- (id)build;

@end

