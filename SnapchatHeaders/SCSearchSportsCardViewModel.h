//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString, SCMedia;

@interface SCSearchSportsCardViewModel : NSObject <NSCopying>
{
    long long _cellStyle;
    NSString *_homeTeam;
    NSString *_awayTeam;
    NSNumber *_homeScore;
    NSNumber *_awayScore;
    NSString *_homeImageUrl;
    NSString *_awayImageUrl;
    NSString *_gameStatus;
    SCMedia *_thumbnailMedia;
}

@property(readonly, copy, nonatomic) SCMedia *thumbnailMedia; // @synthesize thumbnailMedia=_thumbnailMedia;
@property(readonly, copy, nonatomic) NSString *gameStatus; // @synthesize gameStatus=_gameStatus;
@property(readonly, copy, nonatomic) NSString *awayImageUrl; // @synthesize awayImageUrl=_awayImageUrl;
@property(readonly, copy, nonatomic) NSString *homeImageUrl; // @synthesize homeImageUrl=_homeImageUrl;
@property(readonly, copy, nonatomic) NSNumber *awayScore; // @synthesize awayScore=_awayScore;
@property(readonly, copy, nonatomic) NSNumber *homeScore; // @synthesize homeScore=_homeScore;
@property(readonly, copy, nonatomic) NSString *awayTeam; // @synthesize awayTeam=_awayTeam;
@property(readonly, copy, nonatomic) NSString *homeTeam; // @synthesize homeTeam=_homeTeam;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCellStyle:(long long)arg1 homeTeam:(id)arg2 awayTeam:(id)arg3 homeScore:(id)arg4 awayScore:(id)arg5 homeImageUrl:(id)arg6 awayImageUrl:(id)arg7 gameStatus:(id)arg8 thumbnailMedia:(id)arg9;

@end
