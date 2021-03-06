//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCStoriesCustomStoryCreationInfo, SCStoriesGeoStoryConfig;

@interface SCStoriesCustomStoryMetadata : SCDocObject <NSCopying>
{
    NSString *_publicationId;
    long long _type;
    NSString *_mischiefId;
    NSString *_displayName;
    NSString *_subText;
    double _metadataTimestamp;
    SCStoriesCustomStoryCreationInfo *_creationInfo;
    SCStoriesGeoStoryConfig *_geoConfig;
    NSArray *_participants;
    NSArray *_posterIdsPermitted;
    NSArray *_viewerIdsPermitted;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1;
+ (const char *)table;
@property(readonly, copy, nonatomic) NSArray *viewerIdsPermitted; // @synthesize viewerIdsPermitted=_viewerIdsPermitted;
@property(readonly, copy, nonatomic) NSArray *posterIdsPermitted; // @synthesize posterIdsPermitted=_posterIdsPermitted;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, copy, nonatomic) SCStoriesGeoStoryConfig *geoConfig; // @synthesize geoConfig=_geoConfig;
@property(readonly, copy, nonatomic) SCStoriesCustomStoryCreationInfo *creationInfo; // @synthesize creationInfo=_creationInfo;
@property(readonly, nonatomic) double metadataTimestamp; // @synthesize metadataTimestamp=_metadataTimestamp;
@property(readonly, copy, nonatomic) NSString *subText; // @synthesize subText=_subText;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPublicationId:(id)arg1 type:(long long)arg2 mischiefId:(id)arg3 displayName:(id)arg4 subText:(id)arg5 metadataTimestamp:(double)arg6 creationInfo:(id)arg7 geoConfig:(id)arg8 participants:(id)arg9 posterIdsPermitted:(id)arg10 viewerIdsPermitted:(id)arg11;

@end

