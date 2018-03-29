//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLStyleFunction.h"

@class MGLStyleValue, NSDictionary, NSString;

@interface MGLSourceStyleFunction : MGLStyleFunction
{
    NSString *_attributeName;
    MGLStyleValue *_defaultValue;
}

+ (id)functionWithInterpolationMode:(unsigned long long)arg1 stops:(id)arg2 attributeName:(id)arg3 options:(id)arg4;
@property(retain, nonatomic) MGLStyleValue *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *attributeName; // @synthesize attributeName=_attributeName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithInterpolationMode:(unsigned long long)arg1 stops:(id)arg2 attributeName:(id)arg3 options:(id)arg4;
- (id)initWithInterpolationBase:(double)arg1 stops:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSDictionary *stops; // @dynamic stops;

@end

