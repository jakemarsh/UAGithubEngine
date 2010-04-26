//
//  UAGithubURLConnection.h
//  UAGithubEngine
//
//  Created by Owain Hunt on 26/04/2010.
//  Copyright 2010 Owain R Hunt. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "UAGithubEngineRequestTypes.h"

@interface UAGithubURLConnection : NSURLConnection 
{
    NSMutableData *data;                   
    UAGithubRequestType requestType;      
    NSString *identifier;
}


@property (nonatomic, retain) NSMutableData *data;
@property (nonatomic, assign) UAGithubRequestType requestType;
@property (nonatomic, retain) NSString *identifier;

// Initializer
- (id)initWithRequest:(NSURLRequest *)request delegate:(id)delegate requestType:(UAGithubRequestType)requestType;

// Data helper methods
- (void)resetDataLength;
- (void)appendData:(NSData *)newData;


@end