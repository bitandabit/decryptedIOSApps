//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface BCOV_RACValueTransformer : NSValueTransformer
{
    CDUnknownBlockType transformBlock;
}

+ (id)transformerWithBlock:(CDUnknownBlockType)arg1;
+ (_Bool)allowsReverseTransformation;
@property(copy, nonatomic) CDUnknownBlockType transformBlock; // @synthesize transformBlock;
- (void).cxx_destruct;
- (id)transformedValue:(id)arg1;

@end
