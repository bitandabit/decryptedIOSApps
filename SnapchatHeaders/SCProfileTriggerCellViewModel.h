//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCProfileTriggerCellLayoutAttributes, SCSearchActionModel;
@protocol NSCopying;

@interface SCProfileTriggerCellViewModel : NSObject <NSCopying>
{
    NSString *_titleText;
    NSString *_subtitleText;
    NSObject<NSCopying> *_iconViewModel;
    NSString *_actionButtonAsset;
    SCSearchActionModel *_tapActionModel;
    SCSearchActionModel *_actionButtonTapActionModel;
    SCProfileTriggerCellLayoutAttributes *_layoutAttributes;
}

@property(readonly, copy, nonatomic) SCProfileTriggerCellLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(readonly, copy, nonatomic) SCSearchActionModel *actionButtonTapActionModel; // @synthesize actionButtonTapActionModel=_actionButtonTapActionModel;
@property(readonly, copy, nonatomic) SCSearchActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) NSString *actionButtonAsset; // @synthesize actionButtonAsset=_actionButtonAsset;
@property(readonly, copy, nonatomic) NSObject<NSCopying> *iconViewModel; // @synthesize iconViewModel=_iconViewModel;
@property(readonly, copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitleText:(id)arg1 subtitleText:(id)arg2 iconViewModel:(id)arg3 actionButtonAsset:(id)arg4 tapActionModel:(id)arg5 actionButtonTapActionModel:(id)arg6 layoutAttributes:(id)arg7;

@end

