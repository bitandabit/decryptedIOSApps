//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SOJUCollabStoryLogbook-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUStory, SOJUStoryCollaborator, SOJUStoryExtra;

@interface SOJUCollabStoryLogbook : NSObject <SOJUCollabStoryLogbook>
{
    NSArray *_storyNotes;
    NSArray *_friendStoryNotes;
    NSArray *_otherStoryNotes;
    SOJUStory *_story;
    SOJUStoryExtra *_storyExtras;
    SOJUStoryExtra *_friendStoryExtras;
    SOJUStoryExtra *_otherStoryExtras;
    NSNumber *_engagementPercentage;
    NSNumber *_intendedPostTime;
    SOJUStoryCollaborator *_collaborator;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUStoryCollaborator *collaborator; // @synthesize collaborator=_collaborator;
@property(readonly, copy, nonatomic) NSNumber *intendedPostTime; // @synthesize intendedPostTime=_intendedPostTime;
@property(readonly, copy, nonatomic) NSNumber *engagementPercentage; // @synthesize engagementPercentage=_engagementPercentage;
@property(readonly, copy, nonatomic) SOJUStoryExtra *otherStoryExtras; // @synthesize otherStoryExtras=_otherStoryExtras;
@property(readonly, copy, nonatomic) SOJUStoryExtra *friendStoryExtras; // @synthesize friendStoryExtras=_friendStoryExtras;
@property(readonly, copy, nonatomic) SOJUStoryExtra *storyExtras; // @synthesize storyExtras=_storyExtras;
@property(readonly, copy, nonatomic) SOJUStory *story; // @synthesize story=_story;
@property(readonly, copy, nonatomic) NSArray *otherStoryNotes; // @synthesize otherStoryNotes=_otherStoryNotes;
@property(readonly, copy, nonatomic) NSArray *friendStoryNotes; // @synthesize friendStoryNotes=_friendStoryNotes;
@property(readonly, copy, nonatomic) NSArray *storyNotes; // @synthesize storyNotes=_storyNotes;
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
- (id)initWithStoryNotes:(id)arg1 friendStoryNotes:(id)arg2 otherStoryNotes:(id)arg3 story:(id)arg4 storyExtras:(id)arg5 friendStoryExtras:(id)arg6 otherStoryExtras:(id)arg7 engagementPercentage:(id)arg8 intendedPostTime:(id)arg9 collaborator:(id)arg10;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)intendedPostTimeValue;
- (int)engagementPercentageValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
