//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, UIColor;

@protocol SCGroupParticipant <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *bitmojiSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId;
@property(readonly, nonatomic) unsigned long long mischiefVersion;
@property(readonly, copy, nonatomic) NSNumber *talkSessionUserId;
@property(readonly, copy, nonatomic) UIColor *color;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) unsigned long long orderIndex;
@property(readonly, copy, nonatomic) NSString *userId;
@end

