//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSAttributedString, NSString, UIColor;

@protocol SCOnDemandGeofilterTableViewActivityIndicatableCellViewModel <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool selectable;
@property(readonly, nonatomic) _Bool enableActivityIndicator;
@property(readonly, nonatomic) _Bool enableDisclosureIndicator;
@property(readonly, copy, nonatomic) UIColor *detailColor;
@property(readonly, copy, nonatomic) UIColor *contentColor;
@property(readonly, copy, nonatomic) NSAttributedString *attributedDetailContent;
@property(readonly, copy, nonatomic) NSString *detailContent;
@property(readonly, copy, nonatomic) NSString *contentName;
@end

