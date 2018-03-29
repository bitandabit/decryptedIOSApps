//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCProfileTriggerCellLayoutAttributes : NSObject <NSCopying>
{
    double _iconSize;
    double _iconMarginX;
    double _actionButtonSize;
    double _actionButtonMarginX;
    double _titleFontSize;
    double _subtitleFontSize;
}

@property(readonly, nonatomic) double subtitleFontSize; // @synthesize subtitleFontSize=_subtitleFontSize;
@property(readonly, nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(readonly, nonatomic) double actionButtonMarginX; // @synthesize actionButtonMarginX=_actionButtonMarginX;
@property(readonly, nonatomic) double actionButtonSize; // @synthesize actionButtonSize=_actionButtonSize;
@property(readonly, nonatomic) double iconMarginX; // @synthesize iconMarginX=_iconMarginX;
@property(readonly, nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIconSize:(double)arg1 iconMarginX:(double)arg2 actionButtonSize:(double)arg3 actionButtonMarginX:(double)arg4 titleFontSize:(double)arg5 subtitleFontSize:(double)arg6;

@end

