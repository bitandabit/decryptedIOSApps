//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCSearchSectionHeaderModel;

@interface SCSearchSportsCarouselSectionConfiguration : NSObject <NSCopying>
{
    NSString *_sectionTitle;
    NSString *_sectionType;
    NSArray *_sportsGames;
    long long _cellStyle;
    SCSearchSectionHeaderModel *_sectionHeaderModel;
    unsigned long long _numberOfRows;
}

@property(readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(readonly, copy, nonatomic) SCSearchSectionHeaderModel *sectionHeaderModel; // @synthesize sectionHeaderModel=_sectionHeaderModel;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, copy, nonatomic) NSArray *sportsGames; // @synthesize sportsGames=_sportsGames;
@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionTitle:(id)arg1 sectionType:(id)arg2 sportsGames:(id)arg3 cellStyle:(long long)arg4 sectionHeaderModel:(id)arg5 numberOfRows:(unsigned long long)arg6;

@end

