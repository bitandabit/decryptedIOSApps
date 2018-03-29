//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SCSearchQuery, SCSearchSectionHeaderModel;

@interface SCSearchUserCardCarouselSectionConfiguration : NSObject <NSCopying>
{
    SCSearchSectionHeaderModel *_sectionHeaderModel;
    NSArray *_userViewModels;
    SCSearchQuery *_query;
}

@property(readonly, copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) NSArray *userViewModels; // @synthesize userViewModels=_userViewModels;
@property(readonly, copy, nonatomic) SCSearchSectionHeaderModel *sectionHeaderModel; // @synthesize sectionHeaderModel=_sectionHeaderModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionHeaderModel:(id)arg1 userViewModels:(id)arg2 query:(id)arg3;

@end

