//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, SOJUJsonStoryResponse, SOJUServerInfoResponse;

@protocol SOJUPostStorySnapResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *myMobStories;
@property(readonly, copy, nonatomic) NSArray *verifiedStoriesWithCollabs;
@property(readonly, copy, nonatomic) NSArray *verifiedStories;
@property(readonly, copy, nonatomic) NSArray *groupStories;
@property(readonly, copy, nonatomic) SOJUJsonStoryResponse *json;
@property(readonly, copy, nonatomic) SOJUServerInfoResponse *serverInfo;
@end

