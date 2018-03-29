//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCheetahPublicUserIconSource : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    NSString *_emoji_emoji;
    NSString *_bitmoji_userId;
    NSString *_bitmoji_avatarId;
    NSString *_bitmoji_selfieId;
}

+ (id)emojiWithEmoji:(id)arg1;
+ (id)bitmojiWithUserId:(id)arg1 avatarId:(id)arg2 selfieId:(id)arg3;
- (void).cxx_destruct;
- (void)matchEmoji:(CDUnknownBlockType)arg1 bitmoji:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

