//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCBitmojiOutfit-Protocol.h"

@class NSNumber, NSString;

@interface SCBitmojiOutfit : NSObject <SCBitmojiOutfit>
{
    _Bool _hasCustomHead;
    NSString *_outfitURL;
    NSNumber *_outfitId;
}

@property(readonly, nonatomic) _Bool hasCustomHead; // @synthesize hasCustomHead=_hasCustomHead;
@property(readonly, copy, nonatomic) NSNumber *outfitId; // @synthesize outfitId=_outfitId;
@property(readonly, copy, nonatomic) NSString *outfitURL; // @synthesize outfitURL=_outfitURL;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOutfitURL:(id)arg1 outfitId:(id)arg2 hasCustomHead:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

