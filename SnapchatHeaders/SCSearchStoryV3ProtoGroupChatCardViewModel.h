//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSearchStoryV3ProtoGroupChatCardViewModel : NSObject <NSCopying>
{
    NSString *_cardTitle;
}

@property(readonly, copy, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCardTitle:(id)arg1;

@end

