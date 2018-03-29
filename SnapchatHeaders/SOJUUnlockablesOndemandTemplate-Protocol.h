//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUUnlockablesOndemandCreativeBase-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGeofilterResponse;

@protocol SOJUUnlockablesOndemandTemplate <NSObject, NSCoding, NSCopying, SOJUUnlockablesOndemandCreativeBase>
@property(readonly, copy, nonatomic) SOJUGeofilterResponse *baseLensGeofilterResponse;
@property(readonly, copy, nonatomic) NSString *smallLensPreviewImageUrl;
@property(readonly, copy, nonatomic) NSNumber *baseLensGeofilterId;
@property(readonly, copy, nonatomic) NSString *instanceId;
@property(readonly, copy, nonatomic) NSArray *textBoxSpecArray;
@property(readonly, copy, nonatomic) NSString *categoryId;
@property(readonly, copy, nonatomic) NSString *idValue;
@property(readonly, copy, nonatomic) NSString *productType;
@property(readonly, copy, nonatomic) NSNumber *defaultHeight;
@property(readonly, copy, nonatomic) NSNumber *defaultWidth;
@property(readonly, copy, nonatomic) NSString *defaultFontUrl;
@property(readonly, copy, nonatomic) NSString *defaultFontName;
@property(readonly, copy, nonatomic) NSArray *backgroundImageUrls;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl;
@property(readonly, copy, nonatomic) NSString *imageUrl;
@end

