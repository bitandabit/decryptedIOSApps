//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, SCSearchActionButtonViewModel, SCSearchActionModel, SCSearchNetworkImage;

@protocol SCImpalaBusinessProfileSearchViewModel <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SCSearchActionModel *tapActionModel;
@property(readonly, copy, nonatomic) SCSearchNetworkImage *logoImage;
@property(readonly, copy, nonatomic) SCSearchActionButtonViewModel *actionButtonViewModel;
@property(readonly, copy, nonatomic) NSString *location;
@property(readonly, copy, nonatomic) NSString *brandName;
@end

