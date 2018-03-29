//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface SVGParser : NSObject <NSXMLParserDelegate>
{
    NSMutableDictionary *root;
    NSMutableArray *groupStack;
    _Bool insideSVG;
    NSError *_parserError;
    NSURL *_svgURL;
}

@property(readonly, nonatomic) NSURL *svgURL; // @synthesize svgURL=_svgURL;
@property(retain, nonatomic) NSDictionary *root; // @synthesize root;
@property(retain, nonatomic) NSError *parserError; // @synthesize parserError=_parserError;
- (void).cxx_destruct;
- (id)absoluteURL:(id)arg1;
- (id)relativeURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithString:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
