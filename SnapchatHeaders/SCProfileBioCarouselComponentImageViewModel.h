//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;
@protocol NSCopying;

@interface SCProfileBioCarouselComponentImageViewModel : NSObject <NSCopying>
{
    long long _type;
    NSString *_subtitleText;
    NSObject<NSCopying> *_contentViewModel;
}

@property(readonly, copy, nonatomic) NSObject<NSCopying> *contentViewModel; // @synthesize contentViewModel=_contentViewModel;
@property(readonly, copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 subtitleText:(id)arg2 contentViewModel:(id)arg3;

@end

