//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber;

@interface SCAAppStorageUsage : SCAUserTrackedEvent <MapSerializable, NSCopying>
{
    NSNumber *storageUsageDocumentMB;
    NSNumber *storageUsageCacheMB;
    NSNumber *storageUsageTemporaryMB;
    NSNumber *storageUsageGalleryMB;
    NSNumber *storageUsageFilesMB;
    NSNumber *storageUsageTotalMB;
    NSNumber *storageSpaceFreeMB;
    NSNumber *storageSpaceTotalMB;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (long long)getStorageSpaceTotalMB;
- (void)setStorageSpaceTotalMB:(long long)arg1;
- (long long)getStorageSpaceFreeMB;
- (void)setStorageSpaceFreeMB:(long long)arg1;
- (long long)getStorageUsageTotalMB;
- (void)setStorageUsageTotalMB:(long long)arg1;
- (long long)getStorageUsageFilesMB;
- (void)setStorageUsageFilesMB:(long long)arg1;
- (long long)getStorageUsageGalleryMB;
- (void)setStorageUsageGalleryMB:(long long)arg1;
- (long long)getStorageUsageTemporaryMB;
- (void)setStorageUsageTemporaryMB:(long long)arg1;
- (long long)getStorageUsageCacheMB;
- (void)setStorageUsageCacheMB:(long long)arg1;
- (long long)getStorageUsageDocumentMB;
- (void)setStorageUsageDocumentMB:(long long)arg1;
- (double)getSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
