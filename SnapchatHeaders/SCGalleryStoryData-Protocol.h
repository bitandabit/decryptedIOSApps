//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSData, NSNumber, SOJUGallerySnapOverlay;

@protocol SCGalleryStoryData <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *mediaFormat;
@property(readonly, copy, nonatomic) NSNumber *mediaType;
@property(readonly, copy, nonatomic) NSData *originalMedia;
@property(readonly, copy, nonatomic) NSData *renderedOverlay;
@property(readonly, copy, nonatomic) SOJUGallerySnapOverlay *sojuOverlay;
@end

