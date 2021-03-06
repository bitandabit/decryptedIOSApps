//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAGalleryBrowseSnapBase.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCAGeofilterGalleryBrowseSnapView : SCAGalleryBrowseSnapBase <MapSerializable, NSCopying>
{
    NSNumber *filterIndexPos;
    NSNumber *filterIndexCount;
    NSString *adsnapPlacementId;
    NSString *encGeoData;
    NSString *filterGeofilterId;
    NSString *filterGeolensId;
    NSString *lensOptionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)getLensOptionId;
- (void)setLensOptionId:(id)arg1;
- (id)getFilterGeolensId;
- (void)setFilterGeolensId:(id)arg1;
- (id)getFilterGeofilterId;
- (void)setFilterGeofilterId:(id)arg1;
- (id)getEncGeoData;
- (void)setEncGeoData:(id)arg1;
- (id)getAdsnapPlacementId;
- (void)setAdsnapPlacementId:(id)arg1;
- (long long)getFilterIndexCount;
- (void)setFilterIndexCount:(long long)arg1;
- (long long)getFilterIndexPos;
- (void)setFilterIndexPos:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

