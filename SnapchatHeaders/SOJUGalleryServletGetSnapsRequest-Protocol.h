//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber;

@protocol SOJUGalleryServletGetSnapsRequest <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *mediaFormat;
@property(readonly, copy, nonatomic) NSNumber *gzippedOverlayData;
@property(readonly, copy, nonatomic) NSNumber *miniThumbnailBytes;
@property(readonly, copy, nonatomic) NSNumber *encryption;
@property(readonly, copy, nonatomic) NSNumber *snapLocation;
@property(readonly, copy, nonatomic) NSNumber *snapTags;
@property(readonly, copy, nonatomic) NSNumber *overlayImageUrl;
@property(readonly, copy, nonatomic) NSNumber *thumbnailUrl;
@property(readonly, copy, nonatomic) NSNumber *mediaUrl;
@property(readonly, copy, nonatomic) NSNumber *overlayData;
@property(readonly, copy, nonatomic) NSArray *snapIds;
@end

