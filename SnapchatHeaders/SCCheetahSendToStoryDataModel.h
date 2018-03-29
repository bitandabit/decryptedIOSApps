//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCheetahSendToStoryDataModel : NSObject <NSCopying>
{
    _Bool _isActive;
    NSString *_labelText;
    NSString *_officialFriendmoji;
    long long _itemType;
    NSString *_itemId;
    NSString *_mischiefId;
}

@property(readonly, copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
@property(readonly, copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, copy, nonatomic) NSString *officialFriendmoji; // @synthesize officialFriendmoji=_officialFriendmoji;
@property(readonly, copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabelText:(id)arg1 officialFriendmoji:(id)arg2 isActive:(_Bool)arg3 itemType:(long long)arg4 itemId:(id)arg5 mischiefId:(id)arg6;

@end
