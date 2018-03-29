//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUPartialStoryLogbook-Protocol.h"

@class NSArray, NSNumber, SOJUStory, SOJUStoryExtra;

@protocol SOJUStoryLogbook <NSObject, NSCoding, NSCopying, SOJUPartialStoryLogbook>
@property(readonly, copy, nonatomic) NSArray *otherStoryNotes;
@property(readonly, copy, nonatomic) NSArray *friendStoryNotes;
@property(readonly, copy, nonatomic) NSArray *storyNotes;
@property(readonly, copy, nonatomic) NSNumber *intendedPostTime;
@property(readonly, copy, nonatomic) NSNumber *engagementPercentage;
@property(readonly, copy, nonatomic) SOJUStoryExtra *otherStoryExtras;
@property(readonly, copy, nonatomic) SOJUStoryExtra *friendStoryExtras;
@property(readonly, copy, nonatomic) SOJUStoryExtra *storyExtras;
@property(readonly, copy, nonatomic) SOJUStory *story;
@end

