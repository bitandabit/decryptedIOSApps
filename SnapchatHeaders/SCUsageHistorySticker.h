//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SOJUSticker;

@interface SCUsageHistorySticker : NSObject <NSCoding, NSCopying>
{
    SOJUSticker *_sticker;
}

@property(retain, nonatomic) SOJUSticker *sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)stickerTypeEnum;
- (id)stickerType;
- (id)packId;
- (id)stickerId;
- (_Bool)isBitmoji;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSticker:(id)arg1;

@end

