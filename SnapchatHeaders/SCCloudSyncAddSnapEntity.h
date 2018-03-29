//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCCloudSyncAddSnapEntity-Protocol.h"

@class NSString;
@protocol SCGallerySnap, SCGallerySnapDetail, SCGallerySnapMiniThumbnail;

@interface SCCloudSyncAddSnapEntity : NSObject <SCCloudSyncAddSnapEntity>
{
    NSString *_duplicateFromSnapId;
    id <SCGallerySnap> _snap;
    id <SCGallerySnapDetail> _detail;
    id <SCGallerySnapMiniThumbnail> _miniThumbnail;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) id <SCGallerySnapMiniThumbnail> miniThumbnail; // @synthesize miniThumbnail=_miniThumbnail;
@property(readonly, copy, nonatomic) id <SCGallerySnapDetail> detail; // @synthesize detail=_detail;
@property(readonly, copy, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
@property(readonly, copy, nonatomic) NSString *duplicateFromSnapId; // @synthesize duplicateFromSnapId=_duplicateFromSnapId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDuplicateFromSnapId:(id)arg1 snap:(id)arg2 detail:(id)arg3 miniThumbnail:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

