//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCSendConfirmationLabelInfo : NSObject
{
    long long _type;
    double _start;
    double _end;
    long long _originalIndex;
}

@property(nonatomic) long long originalIndex; // @synthesize originalIndex=_originalIndex;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 start:(double)arg2 end:(double)arg3 originalIndex:(long long)arg4;

@end

