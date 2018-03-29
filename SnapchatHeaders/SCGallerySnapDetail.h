//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCGallerySnapDetail-Protocol.h"

@class NSString, SOJUGallerySnapOverlay;

@interface SCGallerySnapDetail : NSObject <SCGallerySnapDetail>
{
    NSString *_objectID;
    SOJUGallerySnapOverlay *_overlay;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)gallerySnapDetailWithOverlay:(id)arg1;
+ (id)parseManagedObject:(id)arg1;
+ (id)fetchSnapDetailsWithSnaps:(id)arg1;
+ (id)fetchGallerySnapDetailForSnap:(id)arg1 options:(id)arg2;
+ (unsigned long long)countOfGallerySnapDetailsWithOptions:(id)arg1;
+ (id)fetchGallerySnapDetailsWithOptions:(id)arg1;
+ (id)allKeys;
+ (id)observe:(id)arg1 queue:(id)arg2 changeHandler:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) SOJUGallerySnapOverlay *overlay; // @synthesize overlay=_overlay;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
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
- (id)initWithObjectID:(id)arg1 overlay:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

