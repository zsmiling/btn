//
//  BTNApplication.h
//  btn
//
//  Created by Kyle Banks on 2014-06-16.
//  Copyright (c) 2014 Kyle W. Banks. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kSELECTED_APPLICATION;

@interface BTNApplication : NSObject <NSCoding>

@property NSString *displayName;
@property NSURL *path;
@property NSImage *image;

-(id)initWithDisplayName:(NSString *)displayName
                 andPath:(NSURL *)path
                andImage:(NSImage *)image;

@end
