//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface PathValidationResult : NSObject
{
    unsigned char _operatorAtError;
    _Bool _errorInLastOperation;
    int _errorCode;
    NSString *_unexpectedCharacters;
    struct _NSRange _rangeOfError;
}

@property(retain, nonatomic) NSString *unexpectedCharacters; // @synthesize unexpectedCharacters=_unexpectedCharacters;
@property(nonatomic) _Bool errorInLastOperation; // @synthesize errorInLastOperation=_errorInLastOperation;
@property(nonatomic) unsigned char operatorAtError; // @synthesize operatorAtError=_operatorAtError;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) struct _NSRange rangeOfError; // @synthesize rangeOfError=_rangeOfError;
- (void).cxx_destruct;

@end

