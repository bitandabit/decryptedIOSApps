//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol SOJUBroadcastOfficialStoriesMetadata <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *trackingId;
@property(readonly, copy, nonatomic) NSString *emojiSymbol;
@property(readonly, copy, nonatomic) NSString *safeDisplayName;
@end
